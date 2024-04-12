void fun()
{
  char* entity_2;
  char entity_1[7] = "";
  entity_1 = NULL;
  entity_2 = (char*)malloc(69*sizeof(char));
  entity_2[69-1]='';
  memset(entity_1, 'F', 7-1);
  entity_1[7-1]='';
  memcpy(entity_2, entity_1, 7*sizeof(char));
}