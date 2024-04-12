void fun()
{
  int entity_6 = 23;
  char* entity_4;
  char entity_3[1] = "";
  entity_3 = NULL;
  memset(entity_3, 'Z', 1-1);
  entity_3[1-1]='';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memcpy(entity_4, entity_3, 1*sizeof(char));
}