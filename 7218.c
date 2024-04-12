void fun()
{
  int entity_6 = 64;
  char* entity_1;
  char entity_2[47] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_2, 'F', 47-1);
  entity_2[47-1]='';
  strcpy(entity_1, entity_2);
}