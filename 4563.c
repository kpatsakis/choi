void fun()
{
  int entity_7 = 90;
  char entity_6[82] = "";
  entity_6 = NULL;
  char* entity_1;
  memset(entity_6, 'A', 82-1);
  entity_6[82-1]='';
  entity_1 = (char*)malloc(98*sizeof(char));
  entity_1[98-1]='';
  strcpy(entity_1, entity_6);
}