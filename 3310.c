void fun()
{
  int entity_3 = 83;
  char entity_1[47] = "";
  entity_1 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(69*sizeof(char));
  entity_2[69-1]='';
  memset(entity_1, 'D', 47-1);
  entity_1[47-1]='';
  strcpy(entity_2, entity_1);
}