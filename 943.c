void fun()
{
  int entity_5 = 81;
  int entity_9 = 15;
  char entity_3[29] = "";
  entity_3 = NULL;
  char entity_6 = 'b';
  char* entity_0;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_3, 'a', 29-1);
  entity_3[29-1]='';
  entity_5 = 48;
  memcpy(entity_0, entity_3, 29*sizeof(char));
}