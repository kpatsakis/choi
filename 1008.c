void fun()
{
  int entity_6 = 95;
  int entity_3 = 71;
  char entity_8[29] = "";
  entity_8 = NULL;
  char* entity_2;
  char* entity_5;
  memset(entity_8, 'Z', 29-1);
  entity_8[29-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[76-1]='';
  memcpy(entity_2, entity_8, 29*sizeof(char));
}