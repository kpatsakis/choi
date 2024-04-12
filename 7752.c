void fun()
{
  int entity_0 = 7;
  char entity_6 = 'f';
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char* entity_8;
  char entity_9[16] = "";
  entity_9 = NULL;
  memset(entity_9, 'i', 16-1);
  entity_9[16-1]='';
  entity_8 = (char*)malloc(29*sizeof(char));
  entity_8[29-1]='';
  memset(entity_3, 'U', entity_0-1);
  entity_3[entity_0-1]='';
  entity_3[92] = 'q';
}