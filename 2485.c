void fun()
{
  int entity_6 = 43;
  char* entity_4;
  char entity_2[15] = "";
  entity_2 = NULL;
  char entity_7 = 'M';
  char* entity_8;
  entity_4 = (char*)malloc(15*sizeof(char));
  entity_4[15-1]='';
  memset(entity_2, 'C', 15-1);
  entity_2[15-1]='';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memcpy(entity_8, entity_2, 15*sizeof(char));
}