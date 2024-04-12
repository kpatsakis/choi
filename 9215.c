void fun()
{
  int entity_3 = 24;
  int entity_9 = 8;
  char* entity_2;
  char entity_7[29] = "";
  entity_7 = NULL;
  char entity_0[76] = "";
  entity_0 = NULL;
  memset(entity_0, 'k', 76-1);
  entity_0[76-1]='';
  memset(entity_7, 'Y', 29-1);
  entity_7[29-1]='';
  entity_2 = (char*)malloc(29*sizeof(char));
  entity_2[29-1]='';
  entity_9 = 32;
  entity_0[entity_9] = 'F';
}