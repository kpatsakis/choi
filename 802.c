void fun()
{
  int entity_1 = 20;
  int entity_0 = 92;
  entity_0 = 57;
  char entity_3[26] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'o', 26-1);
  entity_3[26-1]='';
  entity_7 = (char*)malloc(14*sizeof(char));
  entity_7[14-1]='';
  entity_3[entity_0] = 'm';
}