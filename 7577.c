void fun()
{
  char* entity_4;
  char entity_3[68] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(30*sizeof(char));
  entity_4[30-1]='';
  memset(entity_3, 'w', 68-1);
  entity_3[68-1]='';
  entity_3[42] = 'r';
}