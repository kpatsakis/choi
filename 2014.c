void fun()
{
  char entity_5 = 'u';
  char* entity_2;
  char entity_3[80] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(43*sizeof(char));
  entity_2[43-1]='';
  memset(entity_3, 'C', 80-1);
  entity_3[80-1]='';
  memcpy(entity_2, entity_3, 80*sizeof(char));
}