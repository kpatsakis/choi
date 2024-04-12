void fun()
{
  int entity_6 = 59;
  char* entity_4;
  char entity_2[82] = "";
  entity_2 = NULL;
  memset(entity_2, 'F', 82-1);
  entity_2[82-1]='';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  strcpy(entity_4, entity_2);
}