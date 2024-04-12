void fun()
{
  int entity_6 = 84;
  entity_6 = 29;
  char* entity_1;
  char entity_8[15] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_8, 'z', 15-1);
  entity_8[15-1]='';
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  memcpy(entity_3, entity_8, 15*sizeof(char));
}