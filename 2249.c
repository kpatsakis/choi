void fun()
{
  int entity_4 = 65;
  int entity_3 = 57;
  char entity_7[92] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_7, 'D', 92-1);
  entity_7[92-1]='';
  strcpy(entity_2, entity_7);
}