void fun()
{
  int entity_8 = 5;
  entity_8 = 43;
  char entity_4[16] = "";
  entity_4 = NULL;
  char entity_7 = 'f';
  char entity_2[84] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_2, 'h', 84-1);
  entity_2[84-1]='';
  memset(entity_4, 'r', 16-1);
  entity_4[16-1]='';
  strcpy(entity_3, entity_4);
}