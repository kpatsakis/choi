void fun()
{
  int entity_0 = 99;
  char* entity_2;
  char entity_5[29] = "";
  entity_5 = NULL;
  memset(entity_5, 'r', 29-1);
  entity_5[29-1]='';
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  memcpy(entity_2, entity_5, 29*sizeof(char));
}