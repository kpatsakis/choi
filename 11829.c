void fun()
{
  int entity_0 = 8;
  char entity_5[57] = "";
  char* entity_7;
  char entity_4[77] = "";
  char* entity_1;
  memset(entity_5, 'o', 57-1);
  entity_5[57-1]='0';
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'H', 77-1);
  entity_4[77-1]='0';
  entity_7 = (char*)malloc(70*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_1, entity_5);
}