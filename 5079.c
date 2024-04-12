void fun()
{
  int entity_1 = 61;
  char entity_7 = 'X';
  char* entity_3;
  char entity_0 = 'r';
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_4;
  memset(entity_2, 'X', entity_1-1);
  entity_2[entity_1-1]='';
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  entity_4 = (char*)malloc(50*sizeof(char));
  entity_4[50-1]='';
  strcpy(entity_3, entity_2);
}