void fun()
{
  int entity_9 = 66;
  char entity_2[89] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'h', 89-1);
  entity_2[89-1]='';
  entity_3 = (char*)malloc(62*sizeof(char));
  entity_3[62-1]='';
  entity_2[entity_9] = 'Z';
}