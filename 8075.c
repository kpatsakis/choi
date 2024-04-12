void fun()
{
  int entity_4 = 49;
  char* entity_7;
  char entity_2[7] = "";
  entity_2 = NULL;
  memset(entity_2, 'S', 7-1);
  entity_2[7-1]='';
  entity_7 = (char*)malloc(36*sizeof(char));
  entity_7[36-1]='';
  entity_2[entity_4] = 'u';
}