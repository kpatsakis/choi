void fun()
{
  int entity_1 = 92;
  entity_1 = 23;
  char entity_3[68] = "";
  entity_3 = NULL;
  char* entity_7;
  char* entity_6;
  entity_6 = (char*)malloc(85*sizeof(char));
  entity_6[85-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_3, 'C', 68-1);
  entity_3[68-1]='';
  strcpy(entity_7, entity_3);
}