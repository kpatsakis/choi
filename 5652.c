void fun()
{
  int entity_2 = 68;
  char entity_7[47] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  memset(entity_7, 'w', 47-1);
  entity_7[47-1]='';
  strcpy(entity_3, entity_7);
}