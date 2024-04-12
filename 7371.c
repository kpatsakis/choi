void fun()
{
  int entity_3 = 30;
  char entity_2[39] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(68*sizeof(char));
  entity_1[68-1]='';
  memset(entity_2, 'z', 39-1);
  entity_2[39-1]='';
  entity_2[entity_3] = 'F';
}