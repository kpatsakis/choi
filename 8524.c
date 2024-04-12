void fun()
{
  char entity_1[24] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(43*sizeof(char));
  entity_3[43-1]='';
  memset(entity_1, 'g', 24-1);
  entity_1[24-1]='';
  memcpy(entity_3, entity_1, 24*sizeof(char));
}