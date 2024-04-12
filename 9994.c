void fun()
{
  char entity_4 = 'S';
  char entity_3[100] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(49*sizeof(char));
  entity_1[49-1]='';
  memset(entity_3, 'X', 100-1);
  entity_3[100-1]='';
  memcpy(entity_1, entity_3, 100*sizeof(char));
}