void fun()
{
  char entity_4[82] = "";
  entity_4 = NULL;
  char* entity_6;
  memset(entity_4, 'i', 82-1);
  entity_4[82-1]='';
  entity_6 = (char*)malloc(24*sizeof(char));
  entity_6[24-1]='';
  entity_4[69] = 'O';
}