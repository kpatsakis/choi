void fun()
{
  char entity_1[56] = "";
  entity_1 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(19*sizeof(char));
  entity_2[19-1]='';
  memset(entity_1, 'A', 56-1);
  entity_1[56-1]='';
  entity_1[24] = 'Q';
}