void fun()
{
  int entity_4 = 33;
  char* entity_3;
  char entity_7[68] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_7, 'f', 68-1);
  entity_7[68-1]='';
  entity_4 = 90;
  strcpy(entity_3, entity_7);
}