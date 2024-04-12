void fun()
{
  int entity_6 = 66;
  char entity_8[68] = "";
  char* entity_2;
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'W', 68-1);
  entity_8[68-1]='0';
  entity_6 = 89;
  memcpy(entity_2, entity_8, 68*sizeof(char));
}