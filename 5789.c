void fun()
{
  char entity_1[45] = "";
  entity_1 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(25*sizeof(char));
  entity_2[25-1]='';
  memset(entity_1, 'M', 45-1);
  entity_1[45-1]='';
  memcpy(entity_2, entity_1, 45*sizeof(char));
}