void fun()
{
  int entity_6 = 5;
  entity_6 = 28;
  char* entity_5;
  char* entity_2;
  char entity_8[58] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memset(entity_8, 'H', 58-1);
  entity_8[58-1]='';
  entity_2 = (char*)malloc(19*sizeof(char));
  entity_2[19-1]='';
  memcpy(entity_5, entity_8, 58*sizeof(char));
}