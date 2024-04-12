void fun()
{
  char entity_3[74] = "";
  entity_3 = NULL;
  char* entity_9;
  memset(entity_3, 'r', 74-1);
  entity_3[74-1]='';
  entity_9 = (char*)malloc(79*sizeof(char));
  entity_9[79-1]='';
  strcpy(entity_9, entity_3);
}