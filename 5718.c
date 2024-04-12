void fun()
{
  int entity_0 = 7;
  entity_0 = 45;
  char* entity_5;
  char entity_7[57] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'Q', 57-1);
  entity_7[57-1]='';
  entity_4 = (char*)malloc(29*sizeof(char));
  entity_4[29-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memcpy(entity_5, entity_7, 57*sizeof(char));
}