void fun()
{
  int entity_1 = 23;
  char* entity_3;
  char entity_7[58] = "";
  entity_7 = NULL;
  memset(entity_7, 'u', 58-1);
  entity_7[58-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memcpy(entity_3, entity_7, 58*sizeof(char));
}