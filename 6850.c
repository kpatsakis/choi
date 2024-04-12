void fun()
{
  int entity_0 = 74;
  char* entity_7;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char* entity_5;
  char* entity_2;
  entity_5 = (char*)malloc(50*sizeof(char));
  entity_5[50-1]='';
  memset(entity_8, 'K', entity_0-1);
  entity_8[entity_0-1]='';
  entity_7 = (char*)malloc(37*sizeof(char));
  entity_7[37-1]='';
  entity_2 = (char*)malloc(19*sizeof(char));
  entity_2[19-1]='';
  strcpy(entity_7, entity_8);
}