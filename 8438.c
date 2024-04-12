void fun()
{
  int entity_1 = 3;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char* entity_8;
  memset(entity_3, 'r', entity_1-1);
  entity_3[entity_1-1]='';
  entity_8 = (char*)malloc(60*sizeof(char));
  entity_8[60-1]='';
  memcpy(entity_8, entity_3, entity_1*sizeof(char));
}