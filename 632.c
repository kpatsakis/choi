void fun()
{
  int entity_1 = 30;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char* entity_3;
  memset(entity_8, 'P', entity_1-1);
  entity_8[entity_1-1]='';
  entity_3 = (char*)malloc(61*sizeof(char));
  entity_3[61-1]='';
  entity_1 = 68;
  memcpy(entity_3, entity_8, entity_1*sizeof(char));
}