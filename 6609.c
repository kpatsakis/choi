void fun()
{
  char* entity_4;
  char entity_2 = 'O';
  char entity_3[55] = "";
  entity_3 = NULL;
  memset(entity_3, 'z', 55-1);
  entity_3[55-1]='';
  entity_4 = (char*)malloc(73*sizeof(char));
  entity_4[73-1]='';
  entity_3[83] = 'G';
}