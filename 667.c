void fun()
{
  int entity_3 = 45;
  char* entity_7;
  char entity_2[5] = "";
  entity_2 = NULL;
  char entity_0 = 'J';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memset(entity_2, 'j', 5-1);
  entity_2[5-1]='';
  entity_3 = 18;
  strcpy(entity_7, entity_2);
}