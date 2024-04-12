void fun()
{
  int entity_8 = 94;
  char entity_3[15] = "";
  entity_3 = NULL;
  char* entity_1;
  char* entity_6;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  entity_6 = (char*)malloc(44*sizeof(char));
  entity_6[44-1]='';
  memset(entity_3, 'M', 15-1);
  entity_3[15-1]='';
  memcpy(entity_1, entity_3, 15*sizeof(char));
}