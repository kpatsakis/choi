void fun()
{
  char entity_5[51] = "";
  entity_5 = NULL;
  char entity_2[70] = "";
  entity_2 = NULL;
  char* entity_0;
  char entity_4 = 'X';
  char* entity_3;
  memset(entity_5, 'x', 51-1);
  entity_5[51-1]='';
  memset(entity_2, 'O', 70-1);
  entity_2[70-1]='';
  entity_3 = (char*)malloc(22*sizeof(char));
  entity_3[22-1]='';
  entity_0 = (char*)malloc(77*sizeof(char));
  entity_0[77-1]='';
  memcpy(entity_3, entity_5, 51*sizeof(char));
}