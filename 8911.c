void fun()
{
  int entity_8 = 71;
  entity_8 = 20;
  char* entity_2;
  char* entity_7;
  char entity_6[20] = "";
  entity_6 = NULL;
  memset(entity_6, 'u', 20-1);
  entity_6[20-1]='';
  entity_7 = (char*)malloc(14*sizeof(char));
  entity_7[14-1]='';
  entity_2 = (char*)malloc(28*sizeof(char));
  entity_2[28-1]='';
  entity_6[entity_8] = 'D';
}