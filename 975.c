void fun()
{
  int entity_0 = 49;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(25*sizeof(char));
  entity_6[25-1]='';
  memset(entity_3, 'm', entity_0-1);
  entity_3[entity_0-1]='';
  entity_0 = 97;
  memcpy(entity_6, entity_3, entity_0*sizeof(char));
}