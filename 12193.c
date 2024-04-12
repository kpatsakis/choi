void fun()
{
  int entity_4 = 3;
  char* entity_7;
  char* entity_1;
  char entity_8[16] = "";
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[0]='0';
  entity_1 = (char*)malloc(97*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'r', 16-1);
  entity_8[16-1]='0';
  strcpy(entity_7, entity_8);
}