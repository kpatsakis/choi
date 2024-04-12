void fun()
{
  int entity_8 = 21;
  entity_8 = 92;
  char* entity_3;
  char entity_2[49] = "";
  entity_2 = NULL;
  char entity_7[87] = "";
  entity_7 = NULL;
  char entity_4 = 'O';
  memset(entity_2, 'Y', 49-1);
  entity_2[49-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_7, 'c', 87-1);
  entity_7[87-1]='';
  memcpy(entity_3, entity_2, 49*sizeof(char));
}