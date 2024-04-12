void fun()
{
  int entity_2 = 61;
  int entity_3 = 5;
  char entity_5[41] = "";
  entity_5 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(98*sizeof(char));
  entity_7[98-1]='';
  memset(entity_5, 'S', 41-1);
  entity_5[41-1]='';
  entity_5[94] = 'c';
}