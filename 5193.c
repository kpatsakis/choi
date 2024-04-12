void fun()
{
  char entity_2[68] = "";
  entity_2 = NULL;
  char entity_5 = 'n';
  char* entity_7;
  memset(entity_2, 'x', 68-1);
  entity_2[68-1]='';
  entity_7 = (char*)malloc(36*sizeof(char));
  entity_7[36-1]='';
  entity_2[27] = 'p';
}