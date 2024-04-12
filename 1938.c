void fun()
{
  int entity_6 = 45;
  char entity_7 = 'A';
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  char entity_8 = 'e';
  char* entity_2;
  entity_2 = (char*)malloc(68*sizeof(char));
  entity_2[68-1]='';
  memset(entity_3, 'a', entity_6-1);
  entity_3[entity_6-1]='';
  strcpy(entity_2, entity_3);
}