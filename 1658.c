void fun()
{
  char* entity_2;
  char entity_3[74] = "";
  entity_3 = NULL;
  memset(entity_3, 'r', 74-1);
  entity_3[74-1]='';
  entity_2 = (char*)malloc(99*sizeof(char));
  entity_2[99-1]='';
  strcpy(entity_2, entity_3);
}