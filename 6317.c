void fun()
{
  char* entity_6;
  char entity_9[55] = "";
  entity_9 = NULL;
  memset(entity_9, 'J', 55-1);
  entity_9[55-1]='';
  entity_6 = (char*)malloc(68*sizeof(char));
  entity_6[68-1]='';
  entity_9[78] = 'h';
}