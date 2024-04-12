void fun()
{
  char* entity_3;
  char* entity_2;
  char entity_8[35] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(89*sizeof(char));
  entity_2[89-1]='';
  entity_3 = (char*)malloc(73*sizeof(char));
  entity_3[73-1]='';
  memset(entity_8, 'K', 35-1);
  entity_8[35-1]='';
  memcpy(entity_3, entity_8, 35*sizeof(char));
}