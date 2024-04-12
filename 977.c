void fun()
{
  char entity_5[53] = "";
  entity_5 = NULL;
  char* entity_3;
  char* entity_0;
  memset(entity_5, 'H', 53-1);
  entity_5[53-1]='';
  entity_3 = (char*)malloc(34*sizeof(char));
  entity_3[34-1]='';
  entity_0 = (char*)malloc(22*sizeof(char));
  entity_0[22-1]='';
  entity_5[87] = 'A';
}