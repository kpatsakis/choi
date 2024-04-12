void fun()
{
  int entity_1 = 97;
  int entity_3 = 14;
  char* entity_6;
  char entity_2[50] = "";
  entity_2 = NULL;
  char entity_7 = 'X';
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  memset(entity_2, 'w', 50-1);
  entity_2[50-1]='';
  memset(entity_4, 'A', entity_3-1);
  entity_4[entity_3-1]='';
  entity_6 = (char*)malloc(35*sizeof(char));
  entity_6[35-1]='';
  memcpy(entity_6, entity_4, entity_3*sizeof(char));
}